extern void MouseMoveAbsoluteNormalized(long x_normalized, long y_normalized);

extern void LeftClick();

extern void RightClick();

extern void KeyboardPress(unsigned short keyCode);

int main()
{
    KeyboardPress(0x42);
    KeyboardPress(0x43);
    return 0;
}