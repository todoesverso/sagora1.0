

SAGORA - 1.0
=======================================
Sagora es un software libre de la Escuela Universitaria de Artes de la Universidad Nacional de Quilmes que permite crear salas y unirse a salas de audio a traves de una conexión de internet.

Sagora se basa en el software Jamulus (http://llcon.sourceforge.net/) . Se trata de un skin avanzado que mejora las cualidades de navegabilidad del popular software para sesiones virtuales. Ademas se trabajó en un sistema de login de las salas entre otras características. Por otra parte se creo un Central Server para generar una comunidad.

Version de QT utilizada: 5.14.2
Se esta utilizando la version open source de <a href="https://www.qt.io/download-open-source?hsCtaTracking=9f6a2170-a938-42df-a8e2-a9f0b1d6cdce%7C6cb0de4f-9bb5-4778-ab02-bfb62735f3e5 "> QT <a> 

Las versiones de OSX y GNU/Linux se compilan directamente en QT create. Estas utilizan los driver de Coreaudio y de Jack respectivamente.
Las versiones para Windows utilizan drivers ASIO. Por lo tanto es necesario descarga y añadir en la carpeta "windows" del proyecto el <a href="https://www.steinberg.net/en/company/developers.html">SDK de ASIO<a>


Acerca de Sagora
SAGORA, Version 1.0. Mayo 2020
Software para transmisión de audio por internet. Está permitida su redistribución, modificación y/o uso bajo los términos de GNU General Public License.

Autores: Esteban Calcagno, Nicolás Rodríguez Altieri, Diego Romero Mascaró.

Funciona en OSX (10.10 y 10.13 en adelante), Windows (7 en adelante), Linux x86-64/AMD64 64-bit y x86 32-bit y Raspbian, el sistema operativo de Raspberry Pi.

SAGORA es un software libre y gratuito, diseñado y desarrollado por artistas/investigadores de la Escuela Universitaria de Artes de la Universidad Nacional de Quilmes, Argentina.

Permite conectar múltiples usuarios en una sala virtual y transmitir audio en tiempo real sin que se cancelen las señales, como sucede en las plataformas de uso común para teleconferencia. Esta particularidad lo transforma en una aplicación sumamente útil para la práctica musical, tanto en el sector de industrias culturales como en el de educación, ya que permite realizar ensayos y/o conciertos utilizando internet.

SAGORA está desarrollado en C++ y trabaja con la tecnología socket para enviar y recibir información de audio. Tiene la capacidad de equiparar las diferentes latencias de todas las personas conectadas, logrando que las señales lleguen al mismo tiempo y no haya sensación de retraso entre las señales. Permite crear salas o conectarse a salas, desde donde se pueden escuchar a los diferentes participantes, compartiendo un mismo espacio sonoro. Las salas tienen un código que hace que el acceso sea restringido.

Para el diseño y desarrollo de SAGORA se necesitó de un ambiente que favorezca la investigación y la interdisciplinariedad, como lo es la Universidad Nacional de Quilmes (UNQ). En el caso particular de estos artistas/investigadores se puede encontrar inclusive un cruce y colaboración entre diferentes proyectos de investigación. El Dr. Esteban Calcagno es Director de la Licenciatura en Música y Tecnología de la UNQ y de uno de los proyectos de promoción de la investigación en temas estratégicos institucionales (PITEI), creados en la UNQ a fines del año 2018. Este proyecto se denomina “Plataforma de servicios para la educación digital” y tiene por finalidad la creación de una plataforma y aplicaciones para la educación online. Por su parte, el Lic. Diego Romero Mascaró es Director de la Escuela Universitaria de Artes de la UNQ, integrante del PITEI “Plataforma de servicios para la educación digital” y co-director del proyecto de investigación “Desarrollos tecnológicos aplicados a las artes”, que es integrado también, entre otras/os investigadoras/es y becarias/os, por el Lic. Nicolás Rodríguez Altieri, miembro del equipo SAGORA.

SAGORA está basado en el software libre desarrollado por Volker Fisher denominado Jamulus, que permite realizar sesiones libres de improvisación (Jam) online, apoyándose en los permisos concedidos a través de la GNU General Public License.

SAGORA is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with his program; if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA

SAGORA uses the following libraries, resources or code snippets:

Qt cross-platform application framework: http://www.qt.io

Opus Interactive Audio Codec: http://www.opus-codec.org

Audio reverberation code: by Perry R. Cook and Gary P. Scavone, 1995 - 2004 (taken from The Synthesis ToolKit in C++ (STK))

Skins were developed by Diego Romero Mascaró.
