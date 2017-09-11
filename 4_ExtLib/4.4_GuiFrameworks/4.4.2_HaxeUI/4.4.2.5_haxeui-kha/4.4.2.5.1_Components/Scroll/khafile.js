let project = new Project('Test');

project.addAssets('Assets/Font/**');
project.addSources('Source');

project.addLibrary('haxeui-core');
project.addLibrary('haxeui-kha');
project.addLibrary('hscript');

resolve(project);
