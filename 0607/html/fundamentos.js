// mis funciones de javascript 

function borrar(){
// ventana de confirmaci�n. Devuelve verdadero o falso seg�n pulse el usuario en aceptar / cancelar
	return confirm("�Est�s seguro?");
	}
	
function aviso(){
	alert("has pulsado")
	}

// valida un campo de texto: obliga a que no est� vac�o
function validar(F){
	if ((F.nombre.value.length == 0) || (F.nombre.value == " ") ){
		alert("El nombre est� vac�o");
		F.nombre.focus();
		return false;
		}
	return true;
	}
	
// muestra las propiedades del objeto documento en un alert
function propiedades(){
	res = "";
	for (prop in document)
		res += prop +'   ';
	alert(res);
	}
	
// cambia el color de fondo del documento usando una propiedad del objeto
function colorFondo(color) {
	document.bgColor=color;
	}

