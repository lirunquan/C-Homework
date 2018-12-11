#ifndef MOVE_H_
#define MOVE_H_
class Move{
private:
    double x;
    double y;
public:
    Move(double a=0, double b=0);
    showmove() const;
    Move add(const Move & m) const;
    reset(double a=0, double b=0);
};
#endif
