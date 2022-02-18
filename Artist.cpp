#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// TODO: Define default constructor
Artist::Artist()
{
   artistName = "None";
   birthYear = 0;
   deathYear = 0;
}
Artist::Artist(string artistName, int birthYear, int deathYear)
{
   this->artistName = artistName;
   this->birthYear = birthYear; 
   this->deathYear = deathYear;
}
string Artist::GetName() const 
{
   return artistName;
}
int Artist::GetBirthYear() const
{
   return birthYear;
}
int Artist::GetDeathYear() const
{
   return deathYear;
}
void Artist::PrintInfo() const 
{
   cout << "Artist:" << " " << artistName;
   if(deathYear == -1)
   {
      cout << "," << " " << "born " << birthYear << endl;
   }
   else
   {
      cout << " " << "(" << birthYear << "-" << deathYear << ")" << endl;
   }
}

   
   
   

// TODO: Define second constructor to initialize
//       private fields (artistName, birthYear, deathYear)

// TODO: Define get functions: GetName(), GetBirthYear(), GetDeathYear()

// TODO: Define PrintInfo() function
//      If deathYear is entered as -1, only print birthYear
