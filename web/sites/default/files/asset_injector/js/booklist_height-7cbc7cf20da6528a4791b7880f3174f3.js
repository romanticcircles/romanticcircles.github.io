document.addEventListener('mousemove', (mouseEvent) => {
	console.log(`Mouse X: ${mouseEvent.screenY}, Mouse Y: ${mouseEvent.screenY}`);
	document.documentElement.style.setProperty(`--height`, `${mouseEvent.screenY+"px"}`);
});
