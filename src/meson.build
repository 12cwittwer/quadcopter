src_inc = include_directories('.')

subdir('core')

executable(
  'quadcopter_sim',
  'main.cpp',
  include_directories : [src_inc],
  link_with : [core_lib],
  install : true
)
