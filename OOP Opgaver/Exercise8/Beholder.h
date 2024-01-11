#pragma once
const double R = 0.0831;

class Beholder {
public:
    Beholder(double mol, double temperature, double volume);
    double getPressure() const;
    double getTemperature() const;
    double getVolume() const;
    double getMol() const;
    void setTemperatureForPressureAtFixedVolume(double pressure);
    void setPressureForTemperatureFixedVolume(double temperature);

private:
    double mol_;
    double temperature_;
    double volume_;
    double pressure_;
};
