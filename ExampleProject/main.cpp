#include <iostream>
#include <stdlib.h>
#include "Parser.h"
using namespace std;

void pyramid(string* loc, int levels)
{
  for(int x = 0; x < levels; x++)
  {
    for(int y = 0; y < levels - x; y++)
    {
      *loc += " ";
    }
    for(int z = 0; z <= x; z++)
    {
      *loc += "* ";
    }
    *loc += "\n";
  }
}

int main(int argc, char* argv[])
{
  Parser p;
  if(string(argv[1]).compare("-h") == 0)
  {
    if(argc > 2)
    {
      cout<<p.getCommandRef(string(argv[2]));
    }
    else
    {
      cout << "Reference\n";
    }
  }
  else
  {
    string py = "";
    string* pyLoc = &py;
    int layers = atoi(argv[1]);
    pyramid(pyLoc,layers);
    cout<<*pyLoc;
  }
  return 0;
}
