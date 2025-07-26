#include <stdio.h>
#include <string.h>

void diagnose(char s1[], char s2[], char s3[]) {
    // Convert to lowercase? (skip for now due to simplicity)
    
    // Fever + Cough + Sore throat
    if ((strcmp(s1, "fever") == 0 && strcmp(s2, "cough") == 0 && strcmp(s3, "sore_throat") == 0) ||
        (strcmp(s1, "cough") == 0 && strcmp(s2, "fever") == 0 && strcmp(s3, "sore_throat") == 0)) {
        printf("\n🩺 Condition: Flu or COVID-19 suspected.\n");
        printf("💡 Advice: Isolate, rest, and consult a doctor. Test if symptoms worsen.\n");
    }

    // Headache + Vomiting + Sensitivity to light
    else if ((strcmp(s1, "headache") == 0 && strcmp(s2, "vomiting") == 0 && strcmp(s3, "light_sensitivity") == 0)) {
        printf("\n🩺 Condition: Migraine.\n");
        printf("💡 Advice: Avoid light, rest, stay hydrated. Consult neurologist if frequent.\n");
    }

    // Fever + Rash + Joint pain
    else if ((strcmp(s1, "fever") == 0 && strcmp(s2, "rash") == 0 && strcmp(s3, "joint_pain") == 0)) {
        printf("\n🩺 Condition: Suspected Dengue or Chikungunya.\n");
        printf("💡 Advice: Take fluids, avoid self-medication, visit hospital for blood test.\n");
    }

    // Chest pain + Breathlessness + Sweating
    else if ((strcmp(s1, "chest_pain") == 0 && strcmp(s2, "breathlessness") == 0 && strcmp(s3, "sweating") == 0)) {
        printf("\n🩺 Condition: Possible heart-related emergency.\n");
        printf("💡 Advice: Call ambulance immediately. Do NOT delay.\n");
    }

    // Diarrhea + Vomiting + Fatigue
    else if ((strcmp(s1, "diarrhea") == 0 && strcmp(s2, "vomiting") == 0 && strcmp(s3, "fatigue") == 0)) {
        printf("\n🩺 Condition: Gastroenteritis or food poisoning.\n");
        printf("💡 Advice: Oral rehydration, light food, doctor consult if dehydration occurs.\n");
    }

    // Default case
    else {
        printf("\n⚠️ Symptoms not recognized or insufficient.\n");
        printf("💡 Advice: Please consult a medical professional for accurate diagnosis.\n");
    }
}

int main() {
    char symptom1[30], symptom2[30], symptom3[30];

    printf("🔷 Welcome to AI HealthPal 🔷\n");
    printf("Please enter three symptoms (use underscores instead of spaces):\n");
    printf("Examples: fever, sore_throat, headache, rash, chest_pain, vomiting, cough, etc.\n\n");

    printf("Enter Symptom 1: ");
    scanf("%s", symptom1);

    printf("Enter Symptom 2: ");
    scanf("%s", symptom2);

    printf("Enter Symptom 3: ");
    scanf("%s", symptom3);

    diagnose(symptom1, symptom2, symptom3);

    return 0;
}