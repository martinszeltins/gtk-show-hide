newproject_sources = [
  'main.c',
  'newproject-application.c',
  'newproject-window.c',
]

newproject_deps = [
  dependency('gtk4'),
  dependency('libadwaita-1'),
]

# Generate UI files from blueprint files.
blueprints = custom_target('blueprints',
  input: files(
    'newproject-window.blp',
  ),
  output: '.',
  command: [find_program('blueprint-compiler'), 'batch-compile', '@OUTPUT@', '@CURRENT_SOURCE_DIR@', '@INPUT@'],
)

newproject_sources += gnome.compile_resources('newproject-resources',
  'newproject.gresource.xml',
  dependencies: blueprints,
  c_name: 'newproject'
)

executable('newproject', newproject_sources,
  dependencies: newproject_deps,
       install: true,
)
