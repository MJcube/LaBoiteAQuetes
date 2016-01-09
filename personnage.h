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
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string GetfirstName() { return firstName; }
        void SetfirstName(string val) { firstName = val; }
        int GetArmorClass() { return ArmorClass; }
        void SetArmorClass(int val) { ArmorClass = val; }
        int GetmodStr() { return modStr; }
        void SetmodStr(int val) { modStr = val; }
        int GetmodDex() { return modDex; }
        void SetmodDex(int val) { modDex = val; }
        int GetmodCon() { return modCon; }
        void SetmodCon(int val) { modCon = val; }
        int GetmodInt() { return modInt; }
        void SetmodInt(int val) { modInt = val; }
        int GetmodWis() { return modWis; }
        void SetmodWis(int val) { modWis = val; }
        int GetmodCha() { return modCha; }
        void SetmodCha(int val) { modCha = val; }
        int GetmagicResist() { return magicResist; }
        void SetmagicResist(int val) { magicResist = val; }
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
        string name;
        string firstName;
        int ArmorClass;
        int modStr;
        int modDex;
        int modCon;
        int modInt;
        int modWis;
        int modCha;
        int magicResist;
        int BMO;
        int DMD;
};

#endif // CHARACTER_H
