import React from 'react'
import Card from './Card.css'

export default props =>
    <div className="Card">
      <div className="Conteudo">
        {props.children}
      </div>
     <div className="Footer">
       {props.titulo}
     </div> 
    </div>
