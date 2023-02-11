#include <iostream>

int openFile();
int readFile();
int parseFile();

namespace color {
enum Color {
  red,
  blue,
  green,
  yellow,
};
}

enum Color {
  red,
  green,
  blue,
  yellow,
};

enum DaysOfWeek {
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday,
};

enum CardinalDirection {
  north,
  east,
  south,
  west,
};

enum FileReadResult {
  readResultSuccess,
  readResultErrorFileOpen,
  readResultErrorFileRead,
  readResultErrorFileParse,
};

FileReadResult readFileContents() {
  if (!openFile())
    return readResultErrorFileOpen;
  if (!readFile())
    return readResultErrorFileRead;
  if (!parseFile())
    return readResultErrorFileParse;

  return readResultSuccess;
}

int main() {
  Color apple{red};
  Color shirt{green};
  Color cup{blue};

  Color mango{Color::yellow};

  color::Color paint{color::blue};

  std::cout << apple << '\n';

  return 0;
}
