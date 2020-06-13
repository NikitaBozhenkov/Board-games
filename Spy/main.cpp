#include <algorithm>
#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>

#define list std::vector<std::string>

list players = {"Anton", "Sasha", "Lera", "Nikita"};
list locations = {
    "Самолёт", "Школа", "Церковь", "Спа-салон", "Полицейский участок",
    "Океанский лайнер", "Космическая станция", "Отель", "Казино",
    "Воинская часть", "Войско крестоносцев", "Университет", "Ресторан",
    "Посольство", "Театр", "Супермаркет", "Полярная станция",
    "Пиратский корабль", "Поезд", "Овощебаза", "Банк", "Карнавал",
    "Больница", "Кинотеатр", "Кладбище", "Круизный лайнер", "Забегаловка",
    "Тренажёрный зал", "Стадион", "Стройплощадка", "Тюрьма", "Выставка кошек",
    "Торговый центр", "Бассейн", "Ночной клуб", "Цирк", "Подводная лодка",
    "Зоопарк", "Шахта", "Рок-концерт", "Библиотека", "Свадьба"
};

std::string random_spy() {
  srand(time(0));
  size_t spy_index = rand() % players.size();
  std::string spy_name = players[spy_index];
  players.erase(players.begin() + spy_index);
  return spy_name;
}

std::string random_location() {
  srand(time(0));

  // Just in case
  std::unique(locations.begin(), locations.end());

  return locations[rand() % locations.size()];
}

void print_locations() {
  std::ofstream fout("Локации.txt");
  for(const auto& loc : locations) {
    fout << loc << '\n';
  }
}

int main() {
  std::string spy_name = random_spy();
  std::string location = random_location();
  print_locations();

//  Uncomment to debug
  std::cout << "Spy: " << spy_name << '\n';
  std::cout << "Location: " << location << '\n';

  std::ofstream fout(spy_name + ".txt");
  fout << "Вы шпион";
  fout.close();
  for(const auto& name : players) {
    fout.open(name + ".txt");
    fout << location;
    fout.close();
  }

  return 0;
}
