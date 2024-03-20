class fixed {
 private:
  int integer = 0;
  unsigned int frac = 0;

 public:
  void operator=(double);
  void operator+(fixed);
  void operator*(fixed);
};