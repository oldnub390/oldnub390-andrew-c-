import tkinter as tk
from tkinter import ttk
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.backends.backend_tkagg import FigureCanvasTkAgg

# Функция для расчета движения тела с учетом сопротивления воздуха
def calculate_motion():
    # Получение параметров из полей ввода
    try:
        mass = float(mass_entry.get())  # Масса тела (кг)
        diameter = float(diameter_entry.get())  # Диаметр тела (м)
        velocity = float(velocity_entry.get())  # Начальная скорость (м/с)
        angle = float(angle_entry.get())  # Угол броска (градусы)
        drag_coefficient = float(drag_coefficient_entry.get())  # Коэффициент сопротивления воздуха
    except ValueError:
        result_label.config(text="Ошибка: Проверьте введенные данные")
        return

    # Константы
    g = 9.81  # Ускорение свободного падения (м/с^2)
    rho = 1.225  # Плотность воздуха (кг/м^3)
    dt = 0.01  # Шаг времени (с)

    # Вычисление площади поперечного сечения
    cross_sectional_area = np.pi * (diameter / 2) ** 2

    # Преобразование угла в радианы
    angle_rad = np.radians(angle)

    # Начальные условия
    vx = velocity * np.cos(angle_rad)  # Горизонтальная составляющая скорости
    vy = velocity * np.sin(angle_rad)  # Вертикальная составляющая скорости
    x, y = 0, 0  # Начальные координаты

    # Списки для хранения координат
    x_coords, y_coords = [], []

    # Переменные для отслеживания апогея и дальности броска
    max_height = 0  # Максимальная высота
    range_distance = 0  # Дальность броска

    # Моделирование движения
    while y >= 0:
        # Вычисление силы сопротивления воздуха
        speed = np.sqrt(vx**2 + vy**2)
        drag_force = 0.5 * drag_coefficient * rho * cross_sectional_area * speed**2
        drag_x = -drag_force * (vx / speed) if speed > 0 else 0
        drag_y = -drag_force * (vy / speed) if speed > 0 else 0

        # Ускорения
        ax = drag_x / mass  # Ускорение по оси X
        ay = -g + drag_y / mass  # Ускорение по оси Y

        # Обновление скоростей
        vx += ax * dt
        vy += ay * dt

        # Обновление координат
        x += vx * dt
        y += vy * dt

        # Сохранение координат
        x_coords.append(x)
        y_coords.append(y)

        # Отслеживание максимальной высоты
        if y > max_height:
            max_height = y

        # Отслеживание дальности броска (при приземлении)
        if y <= 0:
            range_distance = x

    # Очистка предыдущего графика
    graph_ax.clear()

    # Построение нового графика
    graph_ax.plot(x_coords, y_coords, label="Траектория", color="blue")
    graph_ax.set_title("Траектория движения тела")
    graph_ax.set_xlabel("Расстояние (м)")
    graph_ax.set_ylabel("Высота (м)")
    graph_ax.legend()
    graph_ax.grid()

    # Обновление графика в интерфейсе
    canvas.draw()

    # Вывод апогея и дальности броска
    result_label.config(
        text=f"Апогей: {max_height:.2f} м\nДальность броска: {range_distance:.2f} м"
    )

# Создание графического интерфейса
root = tk.Tk()
root.title("Моделирование движения тела")

# Создание фрейма для ввода данных
input_frame = ttk.Frame(root, padding=10)
input_frame.grid(row=0, column=0, sticky="nsew")

# Поля ввода
ttk.Label(input_frame, text="Масса (кг):").grid(row=0, column=0, sticky="w")
mass_entry = ttk.Entry(input_frame)
mass_entry.grid(row=0, column=1)

ttk.Label(input_frame, text="Диаметр (м):").grid(row=1, column=0, sticky="w")
diameter_entry = ttk.Entry(input_frame)
diameter_entry.grid(row=1, column=1)

ttk.Label(input_frame, text="Начальная скорость (м/с):").grid(row=2, column=0, sticky="w")
velocity_entry = ttk.Entry(input_frame)
velocity_entry.grid(row=2, column=1)

ttk.Label(input_frame, text="Угол броска (градусы):").grid(row=3, column=0, sticky="w")
angle_entry = ttk.Entry(input_frame)
angle_entry.grid(row=3, column=1)

ttk.Label(input_frame, text="Коэффициент сопротивления воздуха:").grid(row=4, column=0, sticky="w")
drag_coefficient_entry = ttk.Entry(input_frame)
drag_coefficient_entry.grid(row=4, column=1)

# Кнопка для запуска расчета
calculate_button = ttk.Button(input_frame, text="Рассчитать", command=calculate_motion)
calculate_button.grid(row=5, column=0, columnspan=2, pady=10)

# Метка для вывода результатов
result_label = ttk.Label(input_frame, text="")
result_label.grid(row=6, column=0, columnspan=2)

# Создание фрейма для графика
graph_frame = ttk.Frame(root, padding=10)
graph_frame.grid(row=0, column=1, sticky="nsew")

# Создание графика
fig, graph_ax = plt.subplots(figsize=(5, 4))
canvas = FigureCanvasTkAgg(fig, master=graph_frame)
canvas_widget = canvas.get_tk_widget()
canvas_widget.pack(fill=tk.BOTH, expand=True)

# Запуск главного цикла
root.mainloop()
