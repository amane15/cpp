#include <cstring>
#include <iostream>
#include <string_view>

int main() {
  std::string_view text{"hello"};
  std::string_view str{text};
  std::string_view more{str};

  std::string_view trains{"Trains are fast"};
  std::cout << trains.length() << '\n';
  std::cout << trains.substr(0, str.find(' ')) << '\n';

  std::string_view peach{"Peach"};
  peach.remove_prefix(1); // ignore first character
  std::cout << peach << '\n';
  peach.remove_suffix(2); // ignore the last two characters
  std::cout << peach << '\n';

  char vowels[]{'a', 'e', 'i', 'o', 'u'};
  std::string_view vowel_str{vowels, std::size(vowels)};

  std::string_view balloon{"balloon"};
  std::cout << std::strlen(balloon.data()) << '\n';

  return 0;
}
