#include <benchmark/benchmark.h>

#include <cpp-bitwise-operators/module/module.h>

namespace
{

void BM_ModuleFunction(benchmark::State& state)
{
  for (auto _ : state) {
    module::module_function(common::Common{"true"}, "true");
  }
}

}  // namespace

BENCHMARK(BM_ModuleFunction);
