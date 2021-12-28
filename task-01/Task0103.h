#pragma once
#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

class Task0103
{

private:
    vector<string> box = {"привет", "Строка", "Инструменты"};
    string line = "Строка Админ удалил привет Инструменты новый инструментарий про Строка котиков привет";
    string cp = line;

public:

    void formatLineVer01();
    void formatLineVer02();
};