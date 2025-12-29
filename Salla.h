#pragma once
#include<string>
const int m=5;
class Salla{
    private:
        int kapaciteti;
        std::string emri;
        int shfrytezimi[m];
    public:
        Salla();
        std::string getEmri();
        void setEmri(std::string emri);
        int getKapaciteti();
        void setKapaciteti(int kapaciteti);
        void inicializoShfrytezimin();
        float shfrytezimiNeDite(int dita);
};