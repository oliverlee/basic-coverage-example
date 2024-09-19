# basic-coverage-example

install bazel or [bazelisk](https://formulae.brew.sh/formula/bazelisk)

this project will set up a hermetic LLVM toolchain on aarch64-darwin and
x86_64-linux

generate coverage with:

```sh
bazel coverage --instrumentation_filter=//:lib //...
```

coverage data is found at `./bazel-out/_coverage/_coverage_report.dat`

```sh
❯  cat bazel-out/darwin_arm64-fastbuild/testlogs/test/lib_test/coverage.dat
SF:lib.hpp
FN:13,_ZeqRK4testIiES2_
FNDA:1,_ZeqRK4testIiES2_
FNF:1
FNH:1
DA:13,1
DA:14,1
DA:15,1
LH:3
LF:3
end_of_record
```

