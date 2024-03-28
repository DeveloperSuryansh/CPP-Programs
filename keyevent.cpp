#include<dos.h>
#include <iostream>
#include <Windows.h>

// Function to simulate a key press
void simulateKeyPress(WORD key) {
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = key;
    input.ki.dwFlags = 0;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}

// Function to simulate a key release
void simulateKeyRelease(WORD key) {
    INPUT input;
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = key;
    input.ki.dwFlags = KEYEVENTF_KEYUP;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    SendInput(1, &input, sizeof(INPUT));
}

// Function to simulate a mouse click
void simulateMouseClick() {
    INPUT input[2];

    // Press the left mouse button
    input[0].type = INPUT_MOUSE;
    input[0].mi.dx = 100;
    input[0].mi.dy = 0;
    input[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    input[0].mi.mouseData = 0;
    input[0].mi.dwExtraInfo = 0;
    input[0].mi.time = 0;

    // Release the left mouse button
    input[1].type = INPUT_MOUSE;
    input[1].mi.dx = 0;
    input[1].mi.dy = 0;
    input[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
    input[1].mi.mouseData = 0;
    input[1].mi.dwExtraInfo = 0;
    input[1].mi.time = 0;

    SendInput(2, input, sizeof(INPUT));
}

int main() {
    // Simulate pressing and releasing the 'A' key
    simulateKeyPress(0x41);
    simulateKeyRelease(0x41);

    // Simulate a mouse click
    simulateMouseClick();

    return 0;
}
