#include <iostream>
#include <vector>
#include <time.h>

class Martian{
    const int sAttackChance = 30;
    //static int number_of_martians;
public:
    static int number_of_martians;
    Martian(){Martian::number_of_martians++;};
    ~Martian(){Martian::number_of_martians--;};

    bool Attack();
    int rAttackChance();
};
int Martian::number_of_martians = 0;

int main() {
    srand(time(nullptr));
    std::vector<Martian*> MartianList;

    while(true){
        MartianList.push_back(new Martian());
        if(Martian::number_of_martians <= 5) continue;
        for(int i = 0; i<Martian::number_of_martians; i++){
            if(!MartianList[i] -> Attack()){
                delete MartianList[i];
                MartianList.erase(MartianList.begin() + i);
            }
        }
        std::cout << "Number of Martians: " << MartianList.size() << '\n';
    }
    return 0;
}

int Martian::rAttackChance() {
    return std::rand() % 101;
}

bool Martian::Attack() {
    return rAttackChance() > sAttackChance;
}
