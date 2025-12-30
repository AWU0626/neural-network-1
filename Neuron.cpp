#include "Neuron.h"
#include <algorithm>
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

  return 0.0;
}

// getters returns a read only for weights
std::vector<double> Neuron::getWeights() const {
  return weights;
}

// getters returns a read only for bias
double Neuron::getBias() const {
  return bias;
}