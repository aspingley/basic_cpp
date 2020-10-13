#include <iostream>
#include <vector>

enum PizzaSize{
    Medium,
    Large,
    XLarge,
};

enum CheeseTypes{
    Mozarella,
    American,
    Goat,
    Gorgonzolla
};

enum Ingredients{
    Onion,
    Mushroom,
    Chicken,
    BellPaper,
    Tomato
};

class Pizza{
    private:
        int private_access; 
        void private_method(){}
        void CutPizza(){
        }
    
    protected:
        int protected_access; // also functions/methods
        void protected_method(){}

    public:

        Pizza(){
            std::cout << "Constructor PIZZA" << std::endl;
        }

        ~Pizza(){
            std::cout << "Destructor PIZZA" << std::endl;
        }

        void SelectBase(const PizzaSize& size){
            // some complicated is replaced with simple print statement
            std::cout << "Select Base called in Pizza class" << std::endl;
        }

        void ApplyCheese(std::vector<CheeseTypes>& types){
            std::cout << "ApplyCheese called in Pizza class" << std::endl;
        }

        std::string GetPizzaName(){
            return "GetPizzaName in Pizza";
        }

        short GetPizzaPrice(){
            return 0;
        }

        void SelectIngredients(std::vector<Ingredients>& ingredients){
            std::cout << "Following Ingredients were selected:" << std::endl;
            for(auto& i: ingredients){
                std::cout << i << std::endl;
            }
        }
};

class BBQPizza: public Pizza{ // BBQ Pizza derives from Pizza
    private:
    public:

        BBQPizza(){
            std::cout << "Constructor BBQPizza" << std::endl;
        }

        ~BBQPizza(){
            std::cout << "Destructor BBQPizza" << std::endl;
        }

        std::string GetPizzaName(){
            protected_method();
            return "BBQPizza";
        }

        short GetPizzaPrice(){
            //private_method();
            return 750;
        }

        //void SelectIngredients(){
        //    std::cout << "SelectIngredients called in BBQPizza class" << std::endl;
       //}
};

class MushroomPizza: public Pizza{ // MP is a type of Pizza
    private:
    public:

        MushroomPizza(){
            std::cout << "Constructor MushroomPizza" << std::endl;
        }

        ~MushroomPizza(){
            std::cout << "Destructor MushroomPizza" << std::endl;
        }

        std::string GetPizzaName(){
            return "MushroomPizza";
        }

        short GetPizzaPrice(){
            return 600;
        }

        //void SelectIngredients(){
        //    std::cout << "SelectIngredients called in MushroomPizza class" << std::endl;
        //}
};

class TripleCheese: public Pizza{
    private:
    public:

         TripleCheese(){
            std::cout << "Constructor TripleCheese" << std::endl;
        }

        ~TripleCheese(){
            std::cout << "Destructor TripleCheese" << std::endl;
        }

        std::string GetPizzaName(){
            return "TripleCheese";
        }

        short GetPizzaPrice(){
            //private_access = 10;
            protected_access = 90;
            return 1000;
        }

        void dummyMethod(){

        }

        //void SelectIngredients(){
        //    std::cout << "SelectIngredients called in TripleCheese class" << std::endl;
        //}
};



int main(){
    
    {
    MushroomPizza mp; // object created
    /*mp.SelectBase(PizzaSize::Medium);
    std::vector<CheeseTypes> mp_ct = {CheeseTypes::American};
    mp.ApplyCheese(mp_ct);
    std::vector<Ingredients> i_mp = {Ingredients::Mushroom, Ingredients::Onion};
    mp.SelectIngredients(i_mp);
    std::cout << "Order = " << mp.GetPizzaName() << \
    "\t" << mp.GetPizzaPrice() << std::endl;
    //mp.protected_method();*/
    }

    std::cout << "\n";

    {
    TripleCheese tp;
    /*tp.SelectBase(PizzaSize::Large);
    std::vector<CheeseTypes> tp_ct = {CheeseTypes::American, CheeseTypes::Goat,\
     CheeseTypes::Mozarella};
    tp.ApplyCheese(tp_ct);
    std::vector<Ingredients> i_tp = {Ingredients::Onion};
    tp.SelectIngredients(i_tp);
    std::cout << "Order = " << tp.GetPizzaName() << \
    "\t" << tp.GetPizzaPrice() << std::endl;
    tp.dummyMethod();*/
    }

 std::cout << "\n";
 {
     BBQPizza bp;
 }


    return 0;
}