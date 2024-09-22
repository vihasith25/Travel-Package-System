#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct passenger {
  char name[20];
  int age;
  char phone_number[10];
};

struct package {
  char destination[20];
  int days;
  float cost_per_day;
};

void intro() {
  printf("\n\n");
  printf("\t\t************************************************************************\n");
  printf("\t\t||        Welcome to the Vihasith Travel Package System!          ||    \n");
  printf("\t\t||    Please select the type of travel you would like to book:    ||  \n");
  printf("\t\t************************************************************************\n");
  printf("\n\t\t1. Domestic\n");
  printf("\t\t2. International\n");
  printf("\t\t3. Exist");
}

void passenger_details(struct passenger *passenger) {
  printf("\n\n\t\tName: %s\n", passenger->name);
  printf("\t\tAge: %d\n", passenger->age);
  printf("\t\tPhone number: %s\n", passenger->phone_number);
}

void package_details(struct package *package) {
  printf("\n\n\t\tDestination: %s\n", package->destination);
  printf("\t\tDays: %d\n", package->days);
  printf("\t\tCost per day: %.2f\n", package->cost_per_day);
}

void receipt(struct passenger *passengers, struct package *package, int num_passengers) {
  int i;
  printf("\n\t\t------------------------------------------------------\n");
  printf("\t\t\t\t*Receipt*\n");
  printf("\t\t------------------------------------------------------\n");
  printf("\t\t------------------:\n");
  printf("\t\tPassengers details:");
  printf("\n\t\t------------------:");
  for (i = 0; i < num_passengers; i++) {
    passenger_details(&passengers[i]);
  }
  printf("\n\t\t----------------:\n");
  printf("\t\tPackage details:");
  printf("\n\t\t----------------:");
  package_details(package);
  printf("\t\tTotal cost: %.2f\n", package->cost_per_day * (num_passengers + package->days));
  printf("\t\t----------------------------------------------------");
  printf("\n\t\t*Thanking You For Choosing Vihasith Travels*");
  printf("\n\t\t----------------------------------------------------\n");

}

int main() {
  int choice,i,n;
  int num_passengers;
  struct passenger passengers[10];
  struct package package;
  FILE *fp;
    fp=fopen("file1.txt","wb");

main:
  intro();
  printf("\n\t\tEnter your choice:");
  scanf("\t\t%d", &choice);
  

  switch (choice) {
    case 1:
      //domestic_options();
  printf("\n\t\tHere are the top 5 places in India:\n");
  printf("\t\t1. Delhi\n");
  printf("\t\t2. Goa\n");
  printf("\t\t3. Kolkata\n");
  printf("\t\t4. Malani\n");
  printf("\t\t5. Hampi\n");
  printf("\t\t6. Display Menu\n");
  printf("\n\t\tSelect An Option From Above List:");
  scanf("%d",&n);
  switch(n){
    case 1:
    printf("\n\t\tYou Have Selected Delhi");
    printf("\n\n\t\tDelhi which is built during the Mughal period and\n\t\tNew Delhi which has many beautiful parks and big new buildings.");
    printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 5000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
    case 2:
      printf("\n\t\tYou Have Selected Goa");
      printf("\n\n\t\tGoa is the smallest state in western India with coastlines of the Arabian Sea.\n\t\tOn 30th May 1987, Goa was declared as a state of India.\n\t\t Goa's capital is Panaji City; its world-class beaches, food, friendly people are the attraction of Goa.\n\t\t Goa is mainly known for world-famous beaches.");

      printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 5000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
case 3:
  printf("\n\t\tYou Have Selected kolkata:");
  printf("\n\n\t\tThe Port of Kolkata is India's oldest operating port and its sole major riverine port.\n\t\tKolkata is regarded as the cultural capital of India.\n\t\t Kolkata is the second largest Bengali-speaking city after Dhaka.");
  printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 5000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
case 4:
  printf("\n\t\tYou Have Selected Manali");
  printf("\n\n\t\tA gift of the Himalayas to the world, \n\t\t Manali is a beautiful township nestled in the picturesque Beas River valley.");
  printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 5000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
 case 5:
    printf("\n\t\tYou Have Selected Hampi");
    printf("\n\n\t\tHampi is a cultural and architectural heritage site built more than 200 years ago.\n\t\t The site was constructed between 1336 AD to 1565 AD.\n\t\t This location is famous for its temples, palaces, market streets and monuments,\n\t\t making up the Vijayanagara Empire.");
    printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 5000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
 case 6:
  goto main;
  break ;
  default:printf("\ninvalid choice"); 
  
  }

   break;

    case 2:
    //  international_options();
  printf("\n\t\tHere are the top 5 places in the world:\n");
  printf("\t\t1. Paris\n");
  printf("\t\t2. Rome\n");
  printf("\t\t3. London\n");
  printf("\t\t4. New York \n");
  printf("\t\t5. Barcelona\n");
  printf("\t\t6. Display Menu\n");
  printf("\n\t\tSelect An Option From Above List:");
  scanf("%d",&n);
  switch(n){
    case 1:
      printf("\n\t\tYou Have Selected Paris");
      printf("\n\n\t\tParis is one of the most beautiful cities in the world.\n\t\t It is known worldwide for the Louvre Museum, Notre-Dame cathedral, and the Eiffel tower.\n\t\t It has a reputation of being a romantic and cultural city.");
      printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 10000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
    case 2:
      printf("\n\t\tYou Have Selected Rome");
      printf("\n\n\t\tThe Metropolitan City of Rome, with a population of 4,355,725 residents, is the most populous metropolitan city in Italy.\n\t\t Its metropolitan area is the third-most populous within Italy. \n\t\tRome is located in the central-western portion of the Italian Peninsula, within Lazio (Latium), along the shores of the Tiber.");
      printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 10000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
case 3:
  printf("\n\t\tYou Have Selected London:");
  printf("\n\n\t\tLondon is the capital city of the United Kingdom.\n\t\t It is the U.K.'s largest metropolis and its economic, transportation, and cultural centre.\n\t\t London is also among the oldest of the world's great cities, with its history spanning nearly two millennia.");
  printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 10000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
case 4:
  printf("\n\t\tYou Have Selected New York ");
  printf("\n\n\t\tNew York was the capital of the United States from 1785 until 1790, and has been the biggest U.S. city since 1790. \n\t\tThe Statue of Liberty welcomed millions of immigrants as they came to the U.S. by ship in the late 19th and early 20th centuries,\n\t\t and it is a symbol of the U.S. and its ideals of liberty and peace.");
 printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 10000;

      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
 case 5:
    printf("\n\t\tYou Have Selected Barcelona");
    printf("\n\n\t\tBarcelona is a very old city in which you can feel the weight of history;it is haunted by history. \n\t\tYou cannot walk around it without perceiving it. Carlos Ruiz Zafon was a novelist, born in Barcelona,\n\t\t whose name has become synonymous with the city thanks to his famous Shadow of the Wind series");
    printf("\n\n\t\tEnter number of passengers:");
      scanf("%d", &num_passengers);
      for ( i = 0; i < num_passengers; i++) {
        printf("\n\n\t\tEnter passenger name         :");
        scanf("%s", &passengers[i].name);
        printf("\t\tEnter passenger age          :");
        scanf("%d", &passengers[i].age);
        printf("\t\tEnter passenger phone number :");
        scanf(" %s", &passengers[i].phone_number);
      }
       printf("\t\tPlease enter the number of days:");
      scanf("%d", &package.days);
      package.cost_per_day = 10000;
      
      printf("\n\n\t\tPlease coform your destination (in words):");
      scanf("%s", package.destination);

      receipt(passengers, &package, num_passengers);
      break;
 case 6:
  goto main;
  break ;
  default:printf("\ninvalid choice"); 
  }

    default:
      break;
  }
fwrite(passengers,sizeof(passengers),1,fp);
printf("\t\tTravel record stored successfully");
getch();
  return 0; 
}
