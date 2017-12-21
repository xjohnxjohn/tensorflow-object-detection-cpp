#ifndef TF_DETECTOR_EXAMPLE_UTILS_H
#define TF_DETECTOR_EXAMPLE_UTILS_H

#endif //TF_DETECTOR_EXAMPLE_UTILS_H

#include <vector>
#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/public/session.h"


using tensorflow::Tensor;
using tensorflow::Status;
using tensorflow::string;


Status ReadLabelsFile(const string& file_name, std::vector<string>* result,
                      size_t* found_label_count);

static Status ReadEntireFile(tensorflow::Env* env, const string& filename,
                             Tensor* output);

Status ReadTensorFromImageFile(const string& file_name, const int input_height,
                               const int input_width, const float input_mean,
                               const float input_std,
                               std::vector<Tensor>* out_tensors);

Status LoadGraph(const string& graph_file_name,
                 std::unique_ptr<tensorflow::Session>* session);