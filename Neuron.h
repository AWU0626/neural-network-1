#ifndef NEURON_H
#define NEURON_H

#include <algorithm>
#include <vector>
class Neuron {
  private:
    std::vector<double> weights;
    double bias;

  public:
    Neuron(const std::vector<double>& w0, double b0);

    // activation functions
    double ReLU(double x);
    double tanh(double x);
    double sigmoid(double x);

    // forward propogation
    double forward(const std::vector<double>& input, double (*activationFunction)(double));

    // getters
    std::vector<double> getWeights();
    double getBias();
};

#endif // Neuron.h