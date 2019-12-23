#include <iostream>
#include <regex>
using namespace std;

int main() {
    // std::string pattern("");
    // for (size_t i = 65; i < 90; i++) {
    //   pattern += i;
    //   pattern += i;
    //   pattern += '|';
    // }
    // pattern += "ZZ";// Regex expression
    // std::cout << pattern << '\n';
    // std::regex rx(pattern);             // Getting the regex object
    //
    // std::string s("AABCDEAABCAABD");       // Defining the string input
    // std::ptrdiff_t number_of_matches = std::distance(  // Count the number of matches inside the iterator
    //     std::sregex_iterator(s.begin(), s.end(), rx),
    //     std::sregex_iterator());
    //
    // std::cout << number_of_matches << std::endl;  // Displaying results


    // std::cout << "Tutorial 2" << '\n';
    //
    // s = "Shrey Tirth Machine Learning";
    // regex r("(.*)   (.*) (.*) (.*)");
    //
    // smatch ma;
    //
    // if (regex_search(s,ma,r)) {
    //   for (size_t i = 0; i < ma.size(); i++) {
    //     std::cout << ma[i] << '\n';
    //   }
    // }

    std::cout << "Tut 3" << '\n';

    std::string pattern;
    for (size_t i = 65; i < 91; i++) {
      for (size_t j = 65; j < 91; j++) {
          pattern = "";
          pattern+=i;
          pattern+=j;

          string test = "ABACABA";
          regex rx(pattern);
          smatch pairs;

          if(regex_search(test,pairs,rx)){
            std::ptrdiff_t number_of_matches = std::distance(  // Count the number of matches inside the iterator
              std::sregex_iterator(test.begin(), test.end(), rx),
              std::sregex_iterator());

            std::cout << pairs[0] << " " << number_of_matches << std::endl;  // Displaying results
          }


      }
    }

    return 0;
}
