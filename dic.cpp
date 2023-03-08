#include <iostream>
#include <map>

using namespace std;

int main() {
   //initialising the map
   map <string, string> mmap = {{"City", "London"}, {"Country", "UK"}, {"Continent", "Europe"}};

   //iterating through the contents
   for (auto itr = mmap.begin(); itr != mmap.end(); ++itr) {
      cout << itr->first << ": " << itr->second << endl;
   }
   return 0;
}