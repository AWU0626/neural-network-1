#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <vector>
class Perceptron {
  private:
    std::vector<double> weights;
    double bias;

  public:
    Perceptron(const std::vector<double>& w0, double b0);

    int Step(double x);
    
    int forward(const std::vector<double>& input, int (*activationFunction)(double));

    std::vector<double> getWeights() const;
    double getBias() const;
};

#endif // Perceptron.h