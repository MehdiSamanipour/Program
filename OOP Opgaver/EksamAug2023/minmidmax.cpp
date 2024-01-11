

// Function to calculate the middle value
void mid_value(const double* left, const double* right, double* middle) {
    *middle = (*left + *right) / 2.0;
}

// Function to calculate the minimum and maximum values
void min_max_value(double left, double right, double* min, double* max) {
    *min = (left < right) ? left : right;
    *max = (left > right) ? left : right;
}

