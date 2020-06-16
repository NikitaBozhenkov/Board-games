#include <algorithm>
#include <iostream>
#include <fstream>
#include <ctime>
#include <vector>

#define list std::vector<std::string>

// Добавить ещё локаций под открытым небом

list players = {
    "Anton", "Nikita", "Kristina", "Katya"
};
list locations = {
    "Самолёт", "Школа", "Церковь", "Спа-салон", "Полицейский участок",
    "Космическая станция", "Отель", "Казино", "Свадьба", "Пляж",
    "Воинская часть", "Университет", "Ресторан", "Выставка кошек",
    "Посольство", "Театр", "Супермаркет", "Полярная станция",
    "Пиратский корабль", "Поезд", "Овощебаза", "Банк", "Карнавал",
    "Больница", "Кинотеатр", "Кладбище", "Круизный лайнер", "Забегаловка",
    "Тренажёрный зал", "Стадион", "Стройплощадка", "Тюрьма", "Ферма",
    "Торговый центр", "Бассейн", "Ночной клуб", "Цирк", "Подводная лодка",
    "Зоопарк", "Шахта", "Рок-концерт", "Библиотека", "Баня", "Деревня",
    "Съёмочная площадка", "База террористов", "Чайная фабрика",
    "Заправка", "Хоккейная арена", "Музей", "Лесопилка", "Кукольный дом",
    "Столовая", "Бизнес-центр", "Автосалон", "Птицефабрика", "Хостел",
    "Центр пластической хирургии", "Общежитие", "Бухгалтерия", "Турагенство",
    "Метро", "Марштурка", "АЭС", "Казарма"
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
  std::sort(locations.begin(), locations.end());

  std::ofstream fout("Locations.txt");
  for(const auto& loc : locations) {
    fout << loc << '\n';
  }
}

int main() {
  std::string spy_name = random_spy();
  std::string location = random_location();
  print_locations();

//  Uncomment to debug
//  std::cout << "Spy: " << spy_name << '\n';
//  std::cout << "Location: " << location << '\n';

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
