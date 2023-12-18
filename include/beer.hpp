#pragma once


class Beer
{
private:
    float _alcoholContents;
public:
    Beer();
    float getAlcoholContent() const;
    void setAlcoholContent(float contents);
};
