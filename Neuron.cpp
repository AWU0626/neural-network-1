#include "Neuron.h"
#include <algorithm>
#include <cstddef>
#include <stdexcept>
#include <vector>

// Neuron constructor
Neuron::Neuron(const std::vector<double>& w0, double b0) : weights(w0), bias(b0) {}

// activation functions
double Neuron::ReLU(double x) {
  return std::max(0.0, x);
}

double Neuron::tanh(double x) {
  return 0.0;
}

double Neuron::sigmoid(double x) {
  return 0.0;
}

// forward propogation function
double Neuron::forward(
  const std::vector<double>& inputs,
  double (*activationFunction)(double)
) {
  if (inputs.size() != weights.size()) {
    throw std::invalid_argument("Size mismatch. Input size does not match weight size.");
  }

  double dotProduct = 0.0;
  size_t n = weights.size();

  for (size_t i = 0; i < n; i++) {
    dotProduct += inputs[i] * weights[i];
  }

  return activationFunction(dotProduct + bias);
}

// getter for weights
std::vector<double> Neuron::getWeights() {
  return weights;
}

// getter for bias
double Neuron::getBias() {
  return bias;
}