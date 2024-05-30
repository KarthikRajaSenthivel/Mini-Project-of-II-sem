#include <stdio.h>
#include <stdlib.h>
const double length_factors[] = {1e-3, 1e-2, 1, 1e3, 0.3048, 0.0254, 1609.34};
double to_kelvin(double value, int unit) {
    switch (unit) {
        case 0: return value + 273.15; // Celsius to Kelvin
        case 1: return (value - 32) * 5.0 / 9.0 + 273.15; // Fahrenheit to Kelvin
        case 2: return value; // Kelvin to Kelvin
        default: return value;
    }
}
double from_kelvin(double value, int unit) {
    switch (unit) {
        case 0: return value - 273.15; // Kelvin to Celsius
        case 1: return (value - 273.15) * 9.0 / 5.0 + 32; // Kelvin to Fahrenheit
        case 2: return value; // Kelvin to Kelvin
        default: return value;
    }
}
const double area_factors[] = {1, 1e6, 4046.86};
const double weight_factors[] = {1e-3, 1, 1e3};
const double time_factors[] = {1e-3, 1, 60, 3600, 86400, 604800, 2629800, 31557600};
void convert(double value, const double factors[], int from, int to) {
    double result = value * factors[from] / factors[to];
    printf("Converted value: %.2lf\n", result);
}
void length_conversion() {
    printf("Length Conversion\n");
    printf("1. Millimeter\n2. Centimeter\n3. Meter\n4. Kilometer\n5. Foot\n6. Inch\n7. Mile\n");
    int from, to;
    double value;
    printf("Enter the unit to convert from: ");
    scanf("%d", &from);
    printf("Enter the unit to convert to: ");
    scanf("%d", &to);
    printf("Enter value: ");
    scanf("%lf", &value);
    convert(value, length_factors, from, to);
}

void temperature_conversion() {
    printf("Temperature Conversion\n");
    printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n");
    int from, to;
    double value;
    printf("Enter the unit to convert from: ");
    scanf("%d", &from);
    printf("Enter the unit to convert to: ");
    scanf("%d", &to);
    printf("Enter value: ");
    scanf("%lf", &value);
    double kelvin_value = to_kelvin(value, from);
    double result = from_kelvin(kelvin_value, to);
    printf("Converted value: %.2lf\n", result);
}

void area_conversion() {
    printf("Area Conversion\n");
    printf("1. Square Meter\n2. Square Kilometer\n3. Acre\n");
    int from, to;
    double value;
    printf("Enter the unit to convert from: ");
    scanf("%d", &from);
    printf("Enter the unit to convert to: ");
    scanf("%d", &to);
    printf("Enter value: ");
    scanf("%lf", &value);
    convert(value, area_factors, from, to);
}

void weight_conversion() {
    printf("Weight Conversion\n");
    printf("1. Milligram\n2. Gram\n3. Kilogram\n");
    int from, to;
    double value;
    printf("Enter the unit to convert from: ");
    scanf("%d", &from);
    printf("Enter the unit to convert to: ");
    scanf("%d", &to);
    printf("Enter value: ");
    scanf("%lf", &value);
    convert(value, weight_factors, from, to);
}

void time_conversion() {
    printf("Time Conversion\n");
    printf("1. Millisecond\n2. Second\n3. Minute\n4. Hour\n5. Day\n6. Week\n7. Month\n8. Year\n");
    int from, to;
    double value;
    printf("Enter the unit to convert from: ");
    scanf("%d", &from);
    printf("Enter the unit to convert to: ");
    scanf("%d", &to);1
    printf("Enter value: ");
    scanf("%lf", &value);
    convert(value, time_factors, from, to);
}

int main() {
    int choice;
    while (1) {
        printf("\nUnit Converter\n");
        printf("1. Length\n2. Temperature\n3. Area\n4. Weight\n5. Time\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: length_conversion(); break;
            case 2: temperature_conversion(); break;
            case 3: area_conversion(); break;
            case 4: weight_conversion(); break;
            case 5: time_conversion(); break;
            case 6: exit(0); break;
            default: printf("Invalid choice.\n"); break;
        }
    }
    return 0;
}
