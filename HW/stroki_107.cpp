#include <iostream>
#include <string>


using namespace std;


int main() {
  string word, w, line; // слово, буква, строка

  getline(cin, line);
  size_t start, end = 0; // начальная, конечная позиции

  while (end != string::npos && (start = line.find_first_not_of(' ', end)) != string::npos) {
    end = line.find_first_of(' ', start); //задаем конец на первом пробеле после первого слова
    if(end != string::npos){
     w = line.substr(start,(end - start)); // подстрока от старта до конца слова
     }
     else{
         w = line.substr(start, string::npos); // подстрока от фтарта до конца строки
    }
    
    if (w.length() > word.length()){ // обновленное слово
        word = w;
    }
  }

  cout << word<<"\n"<<word.length();

  return 0;
}
