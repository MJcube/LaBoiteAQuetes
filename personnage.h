#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include "string.h"

class personnage
{
    public:
        personnage();
        virtual ~personnage();
        int Getforce() { return force; }
        void Setforce(int val) { force = val; }
        int Getdexterite() { return dexterite; }
        void Setdexterite(int val) { dexterite = val; }
        int Getconstitution() { return constitution; }
        void Setconstitution(int val) { constitution = val; }
        int Getintelligence() { return intelligence; }
        void Setintelligence(int val) { intelligence = val; }
        int Getsagesse() { return sagesse; }
        void Setsagesse(int val) { sagesse = val; }
        int Getcharisme() { return charisme; }
        void Setcharisme(int val) { charisme = val; }
        int Getexperience() { return experience; }
        void Setexperience(int val) { experience = val; }
        string Getnom() { return nom; }
        void Setnom(string val) { nom = val; }
        string Getprenom() { return prenom; }
        void Setprenom(string val) { prenom = val; }
        int GetclasseArmure() { return classeArmure; }
        void SetclasseArmure(int val) { classeArmure = val; }
        int GetmodFOR() { return modFOR; }
        void SetmodFOR(int val) { modFOR = val; }
        int GetmodDEX() { return modDEX; }
        void SetmodDEX(int val) { modDEX = val; }
        int GetmodCON() { return modCON; }
        void SetmodCON(int val) { modCON = val; }
        int GetmodINT() { return modINT; }
        void SetmodINT(int val) { modINT = val; }
        int GetmodSAG() { return modSAG; }
        void SetmodSAG(int val) { modSAG = val; }
        int GetmodCHA() { return modCHA; }
        void SetmodCHA(int val) { modCHA = val; }
        int GetresistanceMagique() { return resistanceMagique; }
        void SetresistanceMagique(int val) { resistanceMagique = val; }
        int GetBMO() { return BMO; }
        void SetBMO(int val) { BMO = val; }
        int GetDMD() { return DMD; }
        void SetDMD(int val) { DMD = val; }
    protected:
    private:
        int force;
        int dexterite;
        int constitution;
        int intelligence;
        int sagesse;
        int charisme;
        int experience;
        string nom;
        string prenom;
        int classeArmure;
        int modFOR;
        int modDEX;
        int modCON;
        int modINT;
        int modSAG;
        int modCHA;
        int resistanceMagique;
        int BMO;
        int DMD;
};

#endif // CHARACTER_H
