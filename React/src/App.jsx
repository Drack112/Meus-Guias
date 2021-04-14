import './App.css'
import React from 'react'

import Primeiro from './components/Primeiro'
import ComParamentro from './components/ComParamentro'
import ComFilhos from './components/ComFilhos'
import Card from './components/layout/Card'
import Repeticao from './components/Repeticao'
import Condicional from './components/Condicional'
import CondicionalComIf from './components/CondicionalComIf'
import Pai from './components/comunication/direto/Pai'
import Super from './components/comunication/indireta/Super'
import Input from './components/form/input'
import Contador from './components/Contador/Contador'

export default (props) => (
    <div className="App">

    <h1>Fundamentos React</h1>

        <div className="Cards">

              <Card titulo="#10 - Contador">
                <Contador passo={10}></Contador>
              </Card>

              <Card titulo="#09 - Input">
                <Input></Input>
              </Card>

              <Card titulo="#08 - Comunicação Indireta">
                <Super></Super>
              </Card>

              <Card titulo="#07 - Comunicação Direta">
                <Pai filho="Freitas"></Pai>
              </Card>

              <Card titulo="#06 - Condicional v2">
                <CondicionalComIf numero={11}></CondicionalComIf>
              </Card>

              <Card titulo="#05 - Condicional v1">
                <Condicional numero={10}></Condicional>
              </Card>

              <Card titulo="#04 - Repetição">
                <Repeticao></Repeticao>
              </Card>

              <Card titulo="#03 - Componente Com Filhos">
                <ComFilhos>
                  <ul>
                    <li>Ana</li>
                    <li>Bia</li>
                    <li>Carlos</li>
                    <li>Daniel</li>
                  </ul>
                </ComFilhos>
              </Card>

              <Card titulo="#02 - Componente Com Paramentro">
                <ComParamentro titulo="Esse é o titulo"
                subtitulo="Esse é o subtitulo">
                </ComParamentro>
              </Card>

              <Card titulo="#01 - Primeiro Componente">
                <Primeiro></Primeiro>
              </Card>
        </div>
  </div>
)