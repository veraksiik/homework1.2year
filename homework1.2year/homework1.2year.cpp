#include <Windows.h>
#include <iostream>
#include <vector>

class Armchair {
public:

    Armchair() :
        price_(5'512),
        material_("wood"),
        width_(120),
        high_(490),
        countOfLegs_(3),
        name_("Evgenii and Nikusha"),
        article_("843SSd"),
        color_("black, only black")
    {}

    Armchair(
        std::string material,
        std::string color,
        std::string article,
        std::string name,
        float width,
        float high,
        int countOfLegs,
        int price
    )
    {
        material_ = material;
        color_ = color;
        article_ = article;
        name_ = name;
        width_ = width;
        high_ = high;
        countOfLegs_ = countOfLegs;
        price_ = price;
    }







    int Price() {
        std::cout << "Введите цену объекта: ";
        std::cin >> price_;
        return price_;
    }
    void Price(int newPrice) {
        price_ = newPrice;
    }

    std::string GetMatelial() {
        std::cout << "Введите материал объекта: ";
        std::cin >> material_;
        return material_;
    }
    void SetMaterial(std::string newMaterial) {
        material_ = newMaterial;
    }

    std::string GetArticle() {
        std::cout << "Введите артикул объекта: ";
        std::cin >> article_;
        return article_;

    }
    void SetArticle(std::string newArticle) {
        article_ = newArticle;

    }

    std::string GetName() {
        std::cout << "Введите название объекта: ";
        std::cin >> name_;
        return name_;

    }
    void SetName(std::string newName) {
        name_ = newName;
    }

    std::string GetColor() {
        std::cout << "Введите цвет объекта: ";
        std::cin >> color_;
        return color_;

    }
    void SetColor(std::string newColor) {
        color_ = newColor;
    }

    float GetWidht() {
        std::cout << "Введите ширину объекта: ";
        std::cin >> width_;
        return width_;

    }
    void SetWidth(float newWidth) {
        width_ = newWidth;
    }

    float GetHigh() {
        std::cout << "Введите высоту объекта: ";
        std::cin >> high_;
        return high_;

    }
    void SetHigh(float newHigh) {
        high_ = newHigh;
    }

    int GetCountOfLegs() {
        std::cout << "Введите количество ножек объекта: ";
        std::cin >> countOfLegs_;
        return countOfLegs_;

    }
    void SetCountOfLegs(float newCountOfLegs) {
        countOfLegs_ = newCountOfLegs;
    }

    float GetVolume() {

        return width_ * high_;

    }
    void Print() {
        std::cout << "Наименование: " << GetName() << "\n";
        std::cout << "Цена: " << Price() << "\n";
        std::cout << "Артикул: " << GetArticle() << "\n";
        std::cout << "Цвет: " << GetColor() << "\n";
        std::cout << "Кол-во ног: " << GetCountOfLegs() << "\n";
        std::cout << "Высота: " << GetHigh() << "\n";
        std::cout << "Ширина: " << GetWidht() << "\n";
        std::cout << "Материал: " << GetMatelial() << "\n";
        std::cout << "Объём: " << GetVolume() << "\n";
        std::cout << "\n\n\n\n\n";

    }



private:
    std::string material_;
    std::string color_;
    std::string article_;
    std::string name_;
    float width_;
    float high_;
    int countOfLegs_;
    int price_;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Armchair myArmchair;
    myArmchair.Print();

    std::vector<Armchair> ArmchairCollection;

    ArmchairCollection.push_back(myArmchair);

    ArmchairCollection[0].SetArticle("563Dd");
    ArmchairCollection[0].SetName("thank for lessons with you");

    ArmchairCollection[0].Print();

    myArmchair.SetArticle("132Hd");
    myArmchair.SetColor("Black");
    myArmchair.SetCountOfLegs(5);
    myArmchair.SetHigh(100);
    myArmchair.SetMaterial("plastik");
    myArmchair.SetName("OOP sheesh");
    myArmchair.SetWidth(250);
    myArmchair.Price(9'000'001);


    ArmchairCollection.push_back(myArmchair);
    std::cout << "\n\n\n\n\n";

    for (auto& el : ArmchairCollection)
    {
        el.Print();
        std::cout << "\n";
    }
    system("pause");
    return 0;
}
