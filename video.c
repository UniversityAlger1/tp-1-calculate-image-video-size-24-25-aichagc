#include <string.h>
#include <stdio.h>
#include "config/video.h"

// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in seconds of the movie (colored image)
//   durationCredits: duration in seconds of credits (black/white image)
//   unit: Unit of the output value. It could be 'bt' for bytes, 'ko' for kilobits, 'mo' for megabits, 'go' for gigabits

// Return value
//   colored video size (based on the unit passed parameter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
    // Bits per pixel for colored image (24 bits)
    float bitsPerPixel = 24;

    // Calcul des tailles pour l'image en couleur et en noir et blanc
    float clrImage = w * h * bitsPerPixel * durationMovie * fps;
    float BImage = w * h * durationCredits * fps;

    // Taille totale en bits
    float sizeInBits = clrImage + BImage;

    // Taille dans l'unité souhaitée
    float size;

    // Convertir la taille en fonction de l'unité demandée
    if (strcmp(unit, "bt") == 0) {
        size = sizeInBits; // Taille en bits
    } else if (strcmp(unit, "ko") == 0) {
        size = sizeInBits / 1024; // Taille en kilobits
    } else if (strcmp(unit, "mo") == 0) {
        size = sizeInBits / (1024 * 1024); // Taille en mégabits
    } else if (strcmp(unit, "go") == 0) {
        size = sizeInBits / (1024 * 1024 * 1024); // Taille en gigabits
    } else {
        // Si l'unité n'est pas reconnue, renvoyer -1 ou une valeur d'erreur
        return -1.0f;
    }

    // Retourner la taille en octets
    return size / 8;
}

