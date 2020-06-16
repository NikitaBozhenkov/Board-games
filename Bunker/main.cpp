#include <iostream>
#include <vector>

#define list std::vector<std::string>

list men_surnames = {
    "Менделеев", "Сорока", "Стоун", "Рябов", "Серухин", "Мокрота", "Днищев",
    "Крупа", "Козел", "Пейдж", "Бэткер", "Питт", "Джус", "Джош", "Петрушенко",
    "Дуняшенко", "Зыбев", "Браун", "Диккенс", "Блэк", "Олухов", "Понятовский",
    "Конев", "Крот", "Москва", "Тонг", "Зверев", "Сперроу", "Дикий", "Джобс",
    "Дроб", "Радикал", "Чинь", "Кун", "Хуэй", "Шо", "Ушо", "Мерсер", "Билл", "Мао"
};

list men_names = {
    "Боб", "Серафим", "Джош", "Дима", "Джордж", "Чан", "По", "Александр", "Брэд",
    "Алекс", "Тимофей", "Сантьяго", "Давид", "Дэвид", "Эдвард", "Андрей", "Эндрио",
    "Кристиан", "Даниэль", "Эдуард", "Иван", "Евгений", "Джэки", "Трифон", "СтанИслав",
    "Август", "Юлий", "Добрыня", "Алёша", "Виссарион", "Вениамин", "Влас", "Владлен",
    "Влад", "Ким", "Герман", "Клим", "Архип", "Осип", "Лев", "Кирилл", "Мефодий",
    "Леопольд", "Мартин", "Оскар", "Спартак", "Феликс", "Ярополк", "Всеслав",
    "Вячеслав", "Миндовг", "Ольгерд", "Гедимин"
};

list women_surnames = {
    "Менделеева", "Сорока", "Стоун", "Рябова", "Серухина", "Мокрота", "Днищева",
    "Крупа", "Козлина", "Пейдж", "Бэткер", "Питт", "Джус", "Джош", "Петрушенко",
    "Дуняшенко", "Зыбева", "Браун", "Диккенс", "Блэк", "Олухова", "Понятовская",
    "Конева", "Крот", "Москва", "По", "Зверева", "Сперроу", "Дикая", "Джобс",
    "Дроб", "Радикал", "Чинь", "Кун", "Хуэй", "Шо", "Ушо", "Мерсер", "Билл", "Мао"
};

list women_names = {
    "Акулина", "Адель", "Майа", "Анита", "Божена", "Аника", "Ханна", "Веста", "Василиса",
    "Венера", "Валерия", "Владлена", "Василина", "Гертруда", "Тамара", "Таисия", "Глафира",
    "Олимпиада", "Джульетта", "Земфира", "Жасмин", "Ада", "Ида", "Кира", "Данелия", "Луиза",
    "Елизавета", "Марфа", "Николь", "Регина", "Ронни", "Джунь", "Шень", "Чжень", "Эсмеральда",
    "Пэппер", "Мейв", "Эмбер", "Крис", "Анджелина", "Анджела", "Миа", "Софи", "Кори", "Кара",
    "Карина", "Кэролайн", "Ким", "Лэйза", "Моника", "Диллон", "Марина", "Мишель", "Михалина",
    "Скай"
};

list disasters = {
    "Зомби-аппокалиспис", "Падение метеорита", "Вечная мерзлота", "Исчезновение воды",
    "Потоп", "Восстание машин", "Лесные пожары", "Ядерная катастрофа", "Нашествие инопланетян",
    "Извержение множества вулканов", "Биологический вирус", "Нарушение экологического баланса",
    "Песчаные бури", "Сильное потепление"
};

list professions = {
    "Медик", "Инструктор по выживанию", "Сексолог", "Актёр", "Модель", "Хакер",
    "Слесарь", "Биолог", "Биофизик", "Физрук", "Клоун", "Футболист", "Охранник",
    "Химик", "Биохимик", "Судья", "Адвокат", "Флорист", "Фермер", "Овощевод",
    "Программист", "Мастер ногтевого сервиса", "Тату-мастер", "Художник",
    "Водитель", "Учитель", "Психолог", "Певец", "Фокусник", "Посол", "Менеджер",
    "Продавец", "Военный", "Военный лётчик", "Лесник", "Сантехник", "Боец скота",
    "Боксёр", "Ветеринар", "Хирург", "Акушер", "Строитель", "Инженер", "Банкир",
    "Гробовщик", "Математик", "Бухгалтер", "Повар", "Кондитер", "Садовник",
    "Электрик", "Пожарный", "Полицеский", "Доктор философских наук", "Экономист",
    "Завхоз", "Агроном", "Стоматолог", "Бармен", "Переводчик", "Робототехник",
    "Механик", "Вор", "Юрист", "Стриптизёр", "Шахтёр", "Следопыт", "Сапёр", "Астроном",
    "Астролог"
};

list hobby = {
    "Танцы", "Садоводство", "Вязание", "Вышивание крестиком", "Изготовление изделий из кожи",
    "Кулинария", "Пчеловодство", "Судоку", "Психология", "Пение", "Актёрское мастерство",
    "Кемпинг", "Программирование", "Футбол", "Теннис", "Лекарственные растения",
    "Делопроизводство", "Хэндмейд", "Выживание", "Стрельба из лука", "Стрельба по мишеням",
    "Фитнес", "Кроссфит", "Чтение книг", "Изучение языков", "Разведение животных",
    "Режиссура", "Блогерство", "Фотография", "Плавание", "Оказание первой помощи",
    "Выживание", "Охота", "Рыбалка", "Строительство", "Ведение хозяйства", "Решение головоломок",
    "Йога", "Косплей", "Ресайклин", "Паркур", "Пейнтбол", "Рисование", "Геокэшинг",
    "Реконструктор", "Волонтёр", "Дайвинг", "Диггерство", "Моделирование", "Микроскопия",
    "Покер", "Керамика", "Мыловарение", "Фэншуй", "Писательство"
};

list health = {

};

struct Person {
  std::string full_name_;
  int age_;
  std::string profession;
  std::string hobby;
  std::string health;
  bool childfree_flag;
  std::string phobia;
  std::string baggage;
  std::string extra_info;
  std::string character;
};

int main() {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}