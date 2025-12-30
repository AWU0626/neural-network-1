#include "Perceptron.h"

#include <stdexcept>
#include <vector>

// Perceptron's activation function (step function)
int Perceptron::Step(double x) {
  return 1 ? x >= 0 : 0;
}

// Perceptron constructor
Perceptron::Perceptron(const std::vector<double>& w0, double b0) : weights(w0), bias(b0) {}

// forward propogation function
int Perceptron::forward(const std::vector<double>& inputs, int (*activationFunction)(double)) {
  if (inputs.size() != weights.size()) {
    throw std::invalid_argument("Size mismatch. Input size does not match weight size.");
  }

  double weightedSum = 0.0;
  int n = weights.size();
  
  for (int i = 0; i < n; i++) {
    weightedSum += inputs[i] * weights[i];
  }

  return activationFunction(weightedSum + bias);
}

// getters returns a read only
std::vector<double> Perceptron::getWeights() const {
  return weights;
}

double Perceptron::getBias() const {
  return bias;
}