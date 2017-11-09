let fs = require('fs');
let path = require('path');
let project = new Project('Test', __dirname);
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{}};
project.setDebugDir('build/linux');
Promise.all([Project.createProject('build/linux-build', __dirname), Project.createProject('/home/eugene/Software/Kha/KodeStudio/resources/app/extensions/kha/Kha', __dirname), Project.createProject('/home/eugene/Software/Kha/KodeStudio/resources/app/extensions/kha/Kha/Kore', __dirname)]).then((projects) => {
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
