// итерация по всем элементам, кроме последнего:
for (size_t i = 0; i < data.size() - 1; ++i) {
    if (data[i] == data[i + 1]) {
        std::cout << "Duplicate value: " << data[i] << "\n";
    }
}