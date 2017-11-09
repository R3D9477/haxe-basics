let fs = require('fs');
let path = require('path');
let project = new Project('Test', __dirname);
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{}};
project.setDebugDir('Export/Kha/linux');
Promise.all([Project.createProject('Export/Kha/linux-build', __dirname), Project.createProject('/home/eugene/Dropbox/Projects/r3d9u11/haxe-basics/4_ExtLib/4.4_GuiFrameworks/4.4.2_HaxeUI/4.4.2.1_SimpleGui/4.4.2.1.3_MultitargetApp/Kha', __dirname), Project.createProject('/home/eugene/Dropbox/Projects/r3d9u11/haxe-basics/4_ExtLib/4.4_GuiFrameworks/4.4.2_HaxeUI/4.4.2.1_SimpleGui/4.4.2.1.3_MultitargetApp/Kha/Kore', __dirname)]).then((projects) => {
	for (let p of projects) project.addSubProject(p);
	let libs = [];
	if (fs.existsSync(path.join('/home/eugene/.haxelib_repo/haxeui-core', 'korefile.js'))) {
		libs.push(Project.createProject('/home/eugene/.haxelib_repo/haxeui-core', __dirname));
	}
	if (fs.existsSync(path.join('/home/eugene/.haxelib_repo/haxeui-kha', 'korefile.js'))) {
		libs.push(Project.createProject('/home/eugene/.haxelib_repo/haxeui-kha', __dirname));
	}
	if (fs.existsSync(path.join('/home/eugene/.haxelib_repo/hscript', 'korefile.js'))) {
		libs.push(Project.createProject('/home/eugene/.haxelib_repo/hscript', __dirname));
	}
	Promise.all(libs).then((libprojects) => {
		for (let p of libprojects) project.addSubProject(p);
		resolve(project);
	});
});
