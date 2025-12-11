project(
  'quadcopter_sim',
  'cpp',
  version : '0.1.0',
  default_options : [
    'warning_level=3',
    'werror=false',
    'cpp_std=c++20'
  ]
)

# Optional: Catch2 for unit tests (header-only or system package)
catch2_dep = dependency('catch2-with-main', required : false)

subdir('src')

if catch2_dep.found()
  subdir('tests')
else
  message('Catch2 not found; tests will not be built.')
endif
