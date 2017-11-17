let project = new Project('Test');

project.addAssets('Assets/Font/**');
project.addSources('Source');

project.addLibrary('hscript');
project.addLibrary('haxeui-core');
project.addLibrary('haxeui-kha');

resolve(project);
