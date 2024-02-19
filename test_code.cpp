#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class Point {
private:
  int x;
  int y;

public:
  Point(){}
  Point(int _x, int _y) {
    x = _x;
    y = _y;
  }
  void show_coord() {
  std::vector<Point> square;
  std::string path = "./text.txt";
  std::ifstream reader;
  reader.open(path);

  bool r = 0;
    std::vector<int> arrx;
    std::vector<int> arry;
    while (!reader.eof()) {
    std::string t;
      getline(reader, t);
      if (r == 0) {
        arrx.push_back (stoi(t));
        r = 1;}
        else 
        arrx.push_back (stoi(t));
        r = 0;
        continue;
      }
    }
reader.close();
for (int a = 0; a < 4; a++) {
  std::cout 
}
};

int main() {

  std::vector<Point> square;

  std::string path = "./text.txt"; 
  std::ifstream reader;
  reader.open(path);

  int tmp_x = 0;
  int tmp_y = 0;

  while(!reader.eof()) {
    std::string t;
    std::ifstream file("./text.txt";
    getline();

    tmp_x = std::stoi(t);
  }
  reader.close();

  Point p0(tmp_x, tmp_y);
  Point p1(tmp_x, tmp_y);
  Point p2(tmp_x, tmp_y);
  Point p3(tmp_x, tmp_y);

  square.push_back(p0);
  square.push_back(p1);
  square.push_back(p2);
  square.push_back(p3);

  return 0;
}
