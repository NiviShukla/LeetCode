class Solution {
public:
    int distMoney(int money, int children) {
        int child = 0;
        /*
        As we have to give each child atleast 1 dollar so we distribute it
        After distributing 1 dollar to each we have to check for maximum number of children getting 8 dollars
        And also no one gets 4 dollars
        */
         if(money < children)
         return -1;

         money -= children;
         /*
         As 1 dollar has been given to each child
         Now we start giving 7 dollars to each child and increase the count
         And decrease the money
         */
         for(int i =1;i<children;i++)
         {
             if(money >=7)
             {
                 child++;
                 money -= 7;
             }
             else
             {
                 return child;
             }
         }

         /*
         Now we have to check if are not left with 3 dollars
         If yes then we will have to decrease the count of child having 8 dollars
         Because we cannot give a child 4 dollars so we will have to decrease a count of child with 8 dollars giving 1 more and 2 to the last child
         If it is not possible then we return -1
         */

         if(money == 3)
         {
             if(child >0)
             child--;
             else
         {
             return -1;
         }
         }


         else if(money == 7)
         {
             child++;
         }

         return child;


    }
};
