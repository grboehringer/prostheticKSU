package com.example.prostheticapp;

public class Threshold {
    private double pressure;
    private double threshold;

    public Threshold(double pres, double thresh) {
        pressure = pres;
    }

    public boolean OverLimit() {
        if (pressure >= threshold) {
            return true;
        }
        else {
            return false;
        }
    }
}

