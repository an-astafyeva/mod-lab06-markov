// Copyright 2026 Anastasia Astafyeva

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "textgen.h"

int main() {
    std::ifstream input("input.txt");

    std::vector<std::string> words;
    std::string word;

    while (input >> word) {
        words.push_back(word);
    }

    TextGenerator generator(2);

    generator.Build(words);

    std::string text = generator.Generate(1000);

    std::cout << text << std::endl;

    return 0;
}
